#include "includes.h"
#define C(c) #c
typedef unsigned char uc;

                                                    uc x[]=
                                                   C(ABCDEF
                                                  GHIJKLMNO
                                                  PQRSTUVWX
                                                 YZabcdefg
                                                 hijklmnop
                                                qrstuvwxy
                                                z01234567
                                                89+/);void 
                                                r(uc *s)
                                   {const uc * d=s;do while 
                                (*d==' ')++d;while (*s++
                               =*d++);}uc *a(const uc 
                             *b,size_t c){uc d[256],
                            *f,*g,h[4],k;size_t i,l,m
                           ;int n=0;memset(d,0x80,256);
                          for(i=0;i<64;i++)d[x[i]]=(uc 
                         )i;d['=']=0;l=0;for(i=0;i<c;i++
                         ){if(d[b[i]]!=0x80)l++;}if(l==0||
                        l%4)return NULL;m=l/4*3;g=f=malloc
                        (m);if(f==NULL       )return NULL;
                       l=0;for(i=0;           i<c;i++){k=d
                       [b[i]];if(k        ==   0x80)continue
                       ;if(b[i]==        '=')n  ++;h[l]=k;l
                       ++;if(l==4        ){*g++ =(h[0]<<2)|
                       (h[1]>>4);       *g++=(h  [1]<<4)|(h
                       [2]>>2);*g       ++=(h[2  ]<<6)|h[3
                       ];l=0;if(n       ){if(n==   1)g--;
                       else if(n==     2)g=g-2;
                       else {free(f    );return 
                       NULL;}break;}   }}return 
                        f;}int main() {r(x);size_t 
                        b=68;size_t d=51;uc e[
                         b];printf("in:");scanf
                         ("%s",e);uc f[]=C(FB4
                          UHhQTEhEbHBIcHRMdHhQeFB
                           4UHhQTEhEQDxkPDhgZDxkaEA
                             8ZGhscEhEbHB0eFB4fFRQTEh
                              wdEx0eHyAhIiMkGhkYIhgXFi
                                  AhIiMkJRslJhwbJRsaGSM
                                  ZGBcWICEXFiAhFxYVHyAWI
                                  BYVFB4fFR8VFBMSHBIcHR4U
                                  ExIRGxwd ExIcEhwSHB0eFB4
                                 UHhQTHRMd  Ex0eHyAWFR8gIS
                                 IYIiMZGB     cWICEXFhUUHh8
                                 gFhUUExI      RGxEQGhsREA8
                                 OGA4NFw0       XGA4YDhgZGhA
                        aEA8     OGA4YDh         gODRcNFw0MF
                      gwWDAsVC   woJExQV         FhcYGQ8OGBk
                      aEA8ZGhAa   GxwSER          scHR4UHhQe
                     HxUfICEXIRc  WFRQT           HRMSERAPDh
                     gZDxkaGxwSE   RAaG          xwdExIcHRMd
                      HhQTHR4UHh8                VFB4fICEXIR
                      cWFR8VFB4fIC              EiIyQaJBokG
                      hkYFxYVFB4UHh            QeFBMSERsREA
                       8OGA4NDAsVCwo         JExQKFAoJEwkIE
                       ggSCBITFAoUCgkIBxEHEQcGEBESCAcREggS
                        CAcRBxESExQKCRMUggCdaL801rMk8nfpyq
                         ahJdBQlD7pTW7ksBTa0/VedCTb53tmTi
                          SO+WajyVchQcH1lk8l);r(f);uc *s
                           =a(e,b);uc *pr=a(f,612);int 
                            y=-1;size_t ss=0;for(size_t 
                            i=0;i<408;i++){bool el=(s
                          [i>>3]>>(7-i%8))%2;ss=ss+
                         (y*el)*pr[i];if(el)y*=-1
                         ;}if(ss==  1117){for(
                        size_t i=
                        0;i<d;i++
                        ){printf(
                       "%c",s[i]
                       ^pr[408+i
                      ]);}}}