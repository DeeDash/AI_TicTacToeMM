#ifndef TICTACTOE_H
#define TICTACTOE_H

#include <bits/stdc++.h>

#include <QMainWindow>

#define SIDE 3

QT_BEGIN_NAMESPACE
namespace Ui {
class TicTacToe;
}
QT_END_NAMESPACE

class TicTacToe : public QMainWindow {
    Q_OBJECT

   public:
    TicTacToe(QWidget *parent = nullptr);
    ~TicTacToe();

   private:
    Ui::TicTacToe *ui;

   private slots:
    void showBoard(char board[][SIDE]);
    void initialise(char board[][SIDE]);
    void declareWinner(int whoseTurn);
    bool rowCrossed(char board[][SIDE]);
    bool columnCrossed(char board[][SIDE]);
    bool diagonalCrossed(char board[][SIDE]);
    bool gameOver(char board[][SIDE]);
    int minimax(char board[][SIDE], int depth, bool isAI);
    int bestMove(char board[][SIDE], int moveIndex);
    void playTicTacToe(int whoseTurn);
};
#endif  // TICTACTOE_H
