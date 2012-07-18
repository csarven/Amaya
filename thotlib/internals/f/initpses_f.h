/*
 *   This file was automatically generated by version 1.7 of cextract.
 *   Manual editing not recommended.
 */

#ifndef __CEXTRACT__
#ifdef __STDC__

extern void InitDocColors ( const char *name );
extern void FreeDocColors ( void );
extern const char *ColorName ( int num );
extern unsigned long ColorPixel ( int num );
extern void TtaFreeThotColor ( int num );
extern int TtaGetThotColor ( unsigned short red,
                             unsigned short green,
                             unsigned short blue );
extern void TtaGiveThotRGB ( int num,
                             unsigned short *red,
                             unsigned short *green,
                             unsigned short *blue );
extern ThotPixmap CreatePattern ( int disp,
                                  int fg,
                                  int bg,
                                  int pattern );

#else /* __STDC__ */

extern void InitDocColors ( const char *name );
extern void FreeDocColors ( void );
extern const char *ColorName ( int num );
extern unsigned long ColorPixel ( int num );
extern void TtaFreeThotColor ( int num );
extern int TtaGetThotColor ( unsigned short red,
                               unsigned short green,
                               unsigned short blue );
extern void TtaGiveThotRGB ( int num,
                               unsigned short *red,
                               unsigned short *green,
                               unsigned short *blue );
extern ThotPixmap CreatePattern ( int disp,
                                    int fg,
                                    int bg,
                                    int pattern );

#endif /* __STDC__ */
#endif /* __CEXTRACT__ */