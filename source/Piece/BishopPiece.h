#ifndef BISHOPPIECE_H
#define BISHOPPIECE_H
//*****************************************************************************
/// \file
/// \brief class for the Bishop Piece
///
/// \author Marko Ilievski
/// \date October 27, 2014
//*****************************************************************************
//#include "../Rules/BishopMove.h"
#include "Piece.h"
#include <string>
using std::string;
#include <vector>
using std::vector;
#include "../Rules/BishopMove.h"

//*****************************************************************************
/// \brief a class for all Bishop Piece`s.
//*****************************************************************************
class BishopPiece : public Piece 
{
  public:
   
//*****************************************************************************
/// creates a Piece object
//*****************************************************************************
   BishopPiece(int c=0);

   
//*****************************************************************************
/// gets the color of the Bishop Piece 
//
/// \return int a 0 if white and 1 if black
//*****************************************************************************
   int getColor() const;


//*****************************************************************************
/// sets the Color of the Bishop Piece
//
/// \param [in] colorOfPiece sets the Pawn Piece`s color
//***************************************************************************** 
   void setColor(int colorOfPiece);


//*****************************************************************************
/// Returns Bishop to user 
//
/// \return a string that will return Bishop Type.
 //*****************************************************************************
   string getType() const;


//*****************************************************************************
/// validates a move based on the Bishop rules.  
//
/// \param [in] board A Board that will contain the currect board state
/// \param [in] ix A int that holds the x coordinate of where the piece is moving from
/// \param [in] iy A int that holds the y coordinate of where the piece is moving from
/// \param [in] dx A int that holds the x coordinate of where the piece is moving to
/// \param [in] dy A int that holds the y coordinate of where the piece is moving to 
//*****************************************************************************
   int validMove(vector< vector < Piece* > > gameBoard, int ix, int iy, int dx, int dy);
   
  private:
   int color;
   string Type;
};

#endif
