// linker define fe25519_to_10l

#include "fe25519.h"

void fe25519_to_10l(fe25519_10l *r, const fe25519 *x) {
  
	r->l[0] = ((x->l[0] & 0x0000000003FFFFFF));
	r->l[1] = ((x->l[0] & 0x0007FFFFFC000000) >> 26);
	r->l[2] = ((x->l[0] & 0xFFF8000000000000) >> 51) | ((x->l[1] & 0x0000000000001FFF) << 13);
	r->l[3] = ((x->l[1] & 0x0000003FFFFFE000) >> 13);
	r->l[4] = ((x->l[1] & 0xFFFFFFC000000000) >> 38);
	r->l[5] = ((x->l[2] & 0x0000000001FFFFFF));
	r->l[6] = ((x->l[2] & 0x0007FFFFFE000000) >> 25);
	r->l[7] = ((x->l[2] & 0xFFF8000000000000) >> 51) | ((x->l[3] & 0x0000000000000FFF) << 13);
	r->l[8] = ((x->l[3] & 0x0000003FFFFFF000) >> 12);
	r->l[9] = ((x->l[3] & 0x7FFFFFC000000000) >> 38);  
}