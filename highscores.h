#ifndef HIGHSCORES
#define HIGHSCORES

#include <QDialog>

namespace Ui {
class HighScores;
}

class HighScores : public QDialog
{
    Q_OBJECT

public:
    explicit HighScores(QWidget *parent = 0);
    ~HighScores();

private slots:


private:
    Ui::HighScores *ui;
};
#endif // HIGHSCORES

