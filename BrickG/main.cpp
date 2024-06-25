#include <SFML/Graphics.hpp>
#include <vector>

// â ũ�� ����
const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;

// �е� ����
const float PADDLE_WIDTH = 100.0f;
const float PADDLE_HEIGHT = 20.0f;
const float PADDLE_VELOCITY = 8.0f;

// �� ����
const float BALL_RADIUS = 10.0f;
const float BALL_VELOCITY = 5.0f;

// ���� ����
const int BRICK_ROWS = 5;
const int BRICK_COLUMNS = 10;
const float BRICK_WIDTH = 60.0f;
const float BRICK_HEIGHT = 20.0f;
const float BRICK_SPACING = 5.0f;

// �е� Ŭ����
class Paddle {
public:
    sf::RectangleShape shape;
    float velocity{ 0.0f };

    Paddle(float mX, float mY) {
        shape.setPosition(mX, mY);
        shape.setSize({ PADDLE_WIDTH, PADDLE_HEIGHT });
        shape.setFillColor(sf::Color::Green);
        shape.setOrigin(PADDLE_WIDTH / 2.0f, PADDLE_HEIGHT / 2.0f);
    }

    void update() {
        shape.move(velocity, 0);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left) && left() > 0)
            velocity = -PADDLE_VELOCITY;
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right) && right() < WINDOW_WIDTH)
            velocity = PADDLE_VELOCITY;
        else
            velocity = 0;
    }

    float left() {
        return shape.getPosition().x - shape.getSize().x / 2.0f;
    }

    float right() {
        return shape.getPosition().x + shape.getSize().x / 2.0f;
    }

    float top() {
        return shape.getPosition().y - shape.getSize().y / 2.0f;
    }

    float bottom() {
        return shape.getPosition().y + shape.getSize().y / 2.0f;
    }
};

// �� Ŭ����
class Ball {
public:
    sf::CircleShape shape;
    sf::Vector2f velocity{ -BALL_VELOCITY, -BALL_VELOCITY };

    Ball(float mX, float mY) {
        shape.setPosition(mX, mY);
        shape.setRadius(BALL_RADIUS);
        shape.setFillColor(sf::Color::Red);
        shape.setOrigin(BALL_RADIUS, BALL_RADIUS);
    }

    void update() {
        shape.move(velocity);

        if (left() < 0)
            velocity.x = BALL_VELOCITY;
        else if (right() > WINDOW_WIDTH)
            velocity.x = -BALL_VELOCITY;

        if (top() < 0)
            velocity.y = BALL_VELOCITY;
        else if (bottom() > WINDOW_HEIGHT)
            velocity.y = -BALL_VELOCITY;
    }

    float left() {
        return shape.getPosition().x - shape.getRadius();
    }

    float right() {
        return shape.getPosition().x + shape.getRadius();
    }

    float top() {
        return shape.getPosition().y - shape.getRadius();
    }

    float bottom() {
        return shape.getPosition().y + shape.getRadius();
    }
};

// ���� Ŭ����
class Brick {
public:
    sf::RectangleShape shape;
    bool destroyed{ false };

    Brick(float mX, float mY) {
        shape.setPosition(mX, mY);
        shape.setSize({ BRICK_WIDTH, BRICK_HEIGHT });
        shape.setFillColor(sf::Color::Yellow);
        shape.setOrigin(BRICK_WIDTH / 2.0f, BRICK_HEIGHT / 2.0f);
    }
};

// �浹 �Լ�
template <class T1, class T2>
bool isIntersecting(T1& mA, T2& mB) {
    return mA.right() >= mB.left() && mA.left() <= mB.right() &&
        mA.bottom() >= mB.top() && mA.top() <= mB.bottom();
}

// �е�� ���� �浹 ó��
void testCollision(Paddle& mPaddle, Ball& mBall) {
    if (!isIntersecting(mPaddle, mBall)) return;

    mBall.velocity.y = -BALL_VELOCITY;

    if (mBall.shape.getPosition().x < mPaddle.shape.getPosition().x)
        mBall.velocity.x = -BALL_VELOCITY;
    else
        mBall.velocity.x = BALL_VELOCITY;
}

// ������ ���� �浹 ó��
void testCollision(Brick& mBrick, Ball& mBall) {
    if (!isIntersecting(mBrick, mBall)) return;

    mBrick.destroyed = true;

    float overlapLeft{ mBall.right() - mBrick.left() };
    float overlapRight{ mBrick.right() - mBall.left() };
    float overlapTop{ mBall.bottom() - mBrick.top() };
    float overlapBottom{ mBrick.bottom() - mBall.top() };

    bool ballFromLeft(abs(overlapLeft) < abs(overlapRight));
    bool ballFromTop(abs(overlapTop) < abs(overlapBottom));

    float minOverlapX{ ballFromLeft ? overlapLeft : overlapRight };
    float minOverlapY{ ballFromTop ? overlapTop : overlapBottom };

    if (abs(minOverlapX) < abs(minOverlapY))
        mBall.velocity.x = ballFromLeft ? -BALL_VELOCITY : BALL_VELOCITY;
    else
        mBall.velocity.y = ballFromTop ? -BALL_VELOCITY : BALL_VELOCITY;
}

int main() {
    sf::RenderWindow window{ {WINDOW_WIDTH, WINDOW_HEIGHT}, "Brick Breaker" };
    window.setFramerateLimit(60);

    Paddle paddle{ WINDOW_WIDTH / 2, WINDOW_HEIGHT - 50 };
    Ball ball{ WINDOW_WIDTH / 2, WINDOW_HEIGHT / 2 };

    std::vector<Brick> bricks;

    for (int iX{ 0 }; iX < BRICK_COLUMNS; ++iX)
        for (int iY{ 0 }; iY < BRICK_ROWS; ++iY) {
            float x{ (iX + 1) * (BRICK_WIDTH + BRICK_SPACING) };
            float y{ (iY + 2) * (BRICK_HEIGHT + BRICK_SPACING) };
            bricks.emplace_back(x, y);
        }

    while (true) {
        window.clear(sf::Color::Black);

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape)) break;

        paddle.update();
        ball.update();

        testCollision(paddle, ball);

        for (auto& brick : bricks) testCollision(brick, ball);

        bricks.erase(std::remove_if(begin(bricks), end(bricks),
            [](const Brick& mBrick) { return mBrick.destroyed; }),
            end(bricks));

        window.draw(paddle.shape);
        window.draw(ball.shape);

        for (auto& brick : bricks) window.draw(brick.shape);

        window.display();
    }

    return 0;
}
