{$IFNDEF FPC}  {$DEFINE DGL} {$ENDIF}
//{$DEFINE DGL}  //comment for gl/glext, else use dglOpenGL
 {$DEFINE ENABLECLIP}
{$DEFINE ENABLESHADER}
{$DEFINE ENABLECLUT}
{$DEFINE ENABLEMOSAIC}
{$DEFINE xUSETRANSFERTEXTURE} //images loaded as simple 8-bit volumes with transfer texture. Overlays/Cutouts not supported.
{$IFNDEF USETRANSFERTEXTURE}

         {$DEFINE ENABLECUTOUT}
   {$DEFINE ENABLEOVERLAY}
   {$DEFINE ENABLESCRIPT}
   {$DEFINE xENABLEEDGE} //replaced...
{$ENDIF}
{$DEFINE ENABLEMOSAICS}

//{$DEFINE ENABLEWATERMARK}