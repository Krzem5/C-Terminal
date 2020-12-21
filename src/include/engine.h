#ifndef __ENGINE_H__
#define __ENGINE_H__
#include <common.h>
#include <renderer.h>



typedef struct _CBUFFER_LAYOUT CBufferLayout;



struct _CBUFFER_LAYOUT{
	RawMatrix pm;
};



void init_engine(void);



void update_engine(double dt);



void update_size(void);



#endif
