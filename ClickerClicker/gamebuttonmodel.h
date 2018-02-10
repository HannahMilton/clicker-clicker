#ifndef GAMEBUTTON_H
#define GAMEBUTTON_H

#include <QObject>

class GameButtonModel : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(int cost READ cost WRITE setCost NOTIFY costChanged)
    Q_PROPERTY(int initialScore READ initialScore WRITE setInitialScore NOTIFY initialScoreChanged)
    Q_PROPERTY(int score READ score WRITE setScore NOTIFY scoreChanged)
    Q_PROPERTY(int amount READ amount WRITE setAmount NOTIFY amountChanged)
    Q_PROPERTY(int cooldown READ cooldown WRITE setCooldown NOTIFY cooldownChanged)
    Q_PROPERTY(int costToAutomate READ costToAutomate WRITE setCostToAutomate NOTIFY costToAutomateChanged)
    Q_PROPERTY(int elapsedTime READ elapsedTime WRITE setElapsedTime NOTIFY elapsedTimeChanged)

public:
    explicit GameButtonModel(QObject *parent = nullptr);

    QString name() const;
    int     cost() const;
    int     initialScore() const;
    int     score() const;
    int     amount() const;
    int     cooldown() const;
    int     costToAutomate() const;
    int     elapsedTime() const;

    void    saveButton() const;

signals:

    void    nameChanged(QString name);
    void    costChanged(int cost);
    void    initialScoreChanged(int initialScore);
    void    scoreChanged(int score);
    void    amountChanged(int amount);
    void    cooldownChanged(int cooldown);
    void    costToAutomateChanged(int costToAutomate);
    void    elapsedTimeChanged(int elapsedTime);

public slots:

    void    setName(const QString &name);
    void    setCost(int cost);
    void    setInitialScore(int initialScore);
    void    setScore(int score);
    void    setAmount(int amount);
    void    setCooldown(int cooldown);
    void    setCostToAutomate(int costToAutomate);
    void    setElapsedTime(int elapsedTime);

private:

    QString m_name;
    int     m_cost;
    int     m_initialScore;
    int     m_score;
    int     m_amount;
    int     m_cooldown;
    int     m_costToAutomate;
    int     m_elapsedTime;
};

#endif // GAMEBUTTON_H
