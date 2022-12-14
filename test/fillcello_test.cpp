#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "../src/fill_cell_o.cpp"

TEST_SUITE("fillCellO")
{
  TEST_CASE("changes the correct cell on the board to O")
  {
    std::string board[3][3] = {{"1", "2", "3"}, {"4", "5", "6"}, {"7", "8", "9"}};
    int playerTurn = 2;
    fillCellO(board, 2, 0, playerTurn);
    CHECK(board[2][0] == "O");
  }

  TEST_CASE("decreases playerTurn by 1")
  {
    std::string board[3][3] = {{"1", "2", "3"}, {"4", "5", "6"}, {"7", "8", "9"}};
    int playerTurn = 2;
    fillCellO(board, 2, 0, playerTurn);
    CHECK(playerTurn == 1);
  }
}
