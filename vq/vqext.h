/********************************************************************
 *                                                                  *
 * THIS FILE IS PART OF THE OggVorbis SOFTWARE CODEC SOURCE CODE.   *
 * USE, DISTRIBUTION AND REPRODUCTION OF THIS SOURCE IS GOVERNED BY *
 * THE GNU LESSER/LIBRARY PUBLIC LICENSE, WHICH IS INCLUDED WITH    *
 * THIS SOURCE. PLEASE READ THESE TERMS BEFORE DISTRIBUTING.        *
 *                                                                  *
 * THE OggVorbis SOURCE CODE IS (C) COPYRIGHT 1994-2000             *
 * by Monty <monty@xiph.org> and the XIPHOPHORUS Company            *
 * http://www.xiph.org/                                             *
 *                                                                  *
 ********************************************************************

 function: prototypes for extermal metrics specific to data type
 last mod: $Id: vqext.h,v 1.10.2.1 2000/11/04 06:22:11 xiphmont Exp $

 ********************************************************************/

#ifndef _V_VQEXT_
#define _V_VQEXT_

#include "vqgen.h"

extern char *vqext_booktype;
extern quant_meta q;
extern int vqext_aux;

extern float vqext_metric(vqgen *v,float *e, float *p);
extern float *vqext_weight(vqgen *v,float *p);
extern void vqext_addpoint_adj(vqgen *v,float *b,int start,int dim,int cols,int num);
extern void vqext_preprocess(vqgen *v);
extern void vqext_quantize(vqgen *v,quant_meta *);


#endif
