
#line 1 "src/issuu_json2sql.rl"
#include "../common.h"
// Ragel version of issuu_json2sql

int echo = 0;


#line 45 "src/issuu_json2sql.rl"



#line 14 "src/issuu_json2sql.c"
static const char _issuu_json2sql_actions[] = {
	0, 1, 2, 2, 0, 2, 2, 1, 
	2, 2, 3, 2, 2, 4, 2, 2, 
	5, 2, 2, 6, 2, 3, 0, 1, 
	2, 3, 1, 4, 2, 3, 3, 6, 
	2, 4, 0, 1, 4, 2
};

static const short _issuu_json2sql_key_offsets[] = {
	0, 0, 4, 8, 10, 13, 20, 24, 
	26, 32, 35, 37, 43, 50, 54, 61, 
	66, 69, 72, 75, 78, 81, 84, 87, 
	91, 94, 97, 100, 103, 106, 109, 111, 
	117, 124, 128, 130, 133, 135, 138, 141, 
	144, 147, 150, 153, 156, 160, 163, 166, 
	169, 172, 175, 178, 180, 184, 187, 190, 
	193, 196, 199, 202, 205, 207, 213, 220, 
	224, 226, 232, 235, 237, 243, 246, 249, 
	252, 255, 258, 261, 264, 268, 271, 274, 
	277, 280, 283, 286, 288, 294, 298, 301, 
	304, 307, 310, 313, 316, 319, 321, 327, 
	330, 333, 340, 345, 348, 351, 355, 358, 
	361, 364, 367, 370, 373, 376, 378, 381, 
	384, 387, 389, 392, 395, 398, 401, 404, 
	407, 410, 413, 417, 420, 423, 426, 429, 
	432, 435, 437, 440, 444, 447, 450, 453, 
	456, 459, 462, 465, 467, 470, 473, 476, 
	477
};

static const char _issuu_json2sql_trans_keys[] = {
	10, 32, 34, 125, 10, 34, 116, 118, 
	10, 34, 10, 32, 58, 10, 32, 34, 
	44, 125, 48, 57, 10, 34, 116, 118, 
	10, 34, 10, 32, 34, 44, 58, 125, 
	10, 34, 115, 10, 34, 10, 32, 34, 
	44, 58, 125, 10, 32, 34, 44, 125, 
	48, 57, 10, 32, 34, 125, 10, 32, 
	34, 44, 125, 48, 57, 10, 32, 34, 
	44, 125, 10, 34, 105, 10, 34, 115, 
	10, 34, 105, 10, 34, 116, 10, 34, 
	111, 10, 34, 114, 10, 34, 95, 10, 
	34, 99, 117, 10, 34, 111, 10, 34, 
	117, 10, 34, 110, 10, 34, 116, 10, 
	34, 114, 10, 34, 121, 10, 34, 10, 
	32, 34, 44, 58, 125, 10, 32, 34, 
	44, 125, 48, 57, 10, 34, 116, 118, 
	10, 34, 10, 34, 115, 10, 34, 10, 
	34, 105, 10, 34, 115, 10, 34, 105, 
	10, 34, 116, 10, 34, 111, 10, 34, 
	114, 10, 34, 95, 10, 34, 99, 117, 
	10, 34, 111, 10, 34, 117, 10, 34, 
	110, 10, 34, 116, 10, 34, 114, 10, 
	34, 121, 10, 34, 10, 34, 115, 117, 
	10, 34, 101, 10, 34, 114, 10, 34, 
	97, 10, 34, 103, 10, 34, 101, 10, 
	34, 110, 10, 34, 116, 10, 34, 10, 
	32, 34, 44, 58, 125, 10, 32, 34, 
	44, 125, 48, 57, 10, 34, 116, 118, 
	10, 34, 10, 32, 34, 44, 58, 125, 
	10, 34, 115, 10, 34, 10, 32, 34, 
	44, 58, 125, 10, 34, 105, 10, 34, 
	115, 10, 34, 105, 10, 34, 116, 10, 
	34, 111, 10, 34, 114, 10, 34, 95, 
	10, 34, 99, 117, 10, 34, 111, 10, 
	34, 117, 10, 34, 110, 10, 34, 116, 
	10, 34, 114, 10, 34, 121, 10, 34, 
	10, 32, 34, 44, 58, 125, 10, 34, 
	115, 117, 10, 34, 101, 10, 34, 114, 
	10, 34, 97, 10, 34, 103, 10, 34, 
	101, 10, 34, 110, 10, 34, 116, 10, 
	34, 10, 32, 34, 44, 58, 125, 10, 
	34, 105, 10, 34, 100, 10, 32, 34, 
	44, 125, 48, 57, 10, 32, 34, 44, 
	125, 10, 34, 105, 10, 34, 100, 10, 
	34, 115, 117, 10, 34, 101, 10, 34, 
	114, 10, 34, 97, 10, 34, 103, 10, 
	34, 101, 10, 34, 110, 10, 34, 116, 
	10, 34, 10, 34, 105, 10, 34, 100, 
	10, 34, 115, 10, 34, 10, 32, 58, 
	10, 34, 105, 10, 34, 115, 10, 34, 
	105, 10, 34, 116, 10, 34, 111, 10, 
	34, 114, 10, 34, 95, 10, 34, 99, 
	117, 10, 34, 111, 10, 34, 117, 10, 
	34, 110, 10, 34, 116, 10, 34, 114, 
	10, 34, 121, 10, 34, 10, 32, 58, 
	10, 34, 115, 117, 10, 34, 101, 10, 
	34, 114, 10, 34, 97, 10, 34, 103, 
	10, 34, 101, 10, 34, 110, 10, 34, 
	116, 10, 34, 10, 32, 58, 10, 34, 
	105, 10, 34, 100, 123, 10, 32, 123, 
	0
};

static const char _issuu_json2sql_single_lengths[] = {
	0, 4, 4, 2, 3, 5, 4, 2, 
	6, 3, 2, 6, 5, 4, 5, 5, 
	3, 3, 3, 3, 3, 3, 3, 4, 
	3, 3, 3, 3, 3, 3, 2, 6, 
	5, 4, 2, 3, 2, 3, 3, 3, 
	3, 3, 3, 3, 4, 3, 3, 3, 
	3, 3, 3, 2, 4, 3, 3, 3, 
	3, 3, 3, 3, 2, 6, 5, 4, 
	2, 6, 3, 2, 6, 3, 3, 3, 
	3, 3, 3, 3, 4, 3, 3, 3, 
	3, 3, 3, 2, 6, 4, 3, 3, 
	3, 3, 3, 3, 3, 2, 6, 3, 
	3, 5, 5, 3, 3, 4, 3, 3, 
	3, 3, 3, 3, 3, 2, 3, 3, 
	3, 2, 3, 3, 3, 3, 3, 3, 
	3, 3, 4, 3, 3, 3, 3, 3, 
	3, 2, 3, 4, 3, 3, 3, 3, 
	3, 3, 3, 2, 3, 3, 3, 1, 
	3
};

static const char _issuu_json2sql_range_lengths[] = {
	0, 0, 0, 0, 0, 1, 0, 0, 
	0, 0, 0, 0, 1, 0, 1, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	1, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 1, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 1, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0
};

static const short _issuu_json2sql_index_offsets[] = {
	0, 0, 5, 10, 13, 17, 24, 29, 
	32, 39, 43, 46, 53, 60, 65, 72, 
	78, 82, 86, 90, 94, 98, 102, 106, 
	111, 115, 119, 123, 127, 131, 135, 138, 
	145, 152, 157, 160, 164, 167, 171, 175, 
	179, 183, 187, 191, 195, 200, 204, 208, 
	212, 216, 220, 224, 227, 232, 236, 240, 
	244, 248, 252, 256, 260, 263, 270, 277, 
	282, 285, 292, 296, 299, 306, 310, 314, 
	318, 322, 326, 330, 334, 339, 343, 347, 
	351, 355, 359, 363, 366, 373, 378, 382, 
	386, 390, 394, 398, 402, 406, 409, 416, 
	420, 424, 431, 437, 441, 445, 450, 454, 
	458, 462, 466, 470, 474, 478, 481, 485, 
	489, 493, 496, 500, 504, 508, 512, 516, 
	520, 524, 528, 533, 537, 541, 545, 549, 
	553, 557, 560, 564, 569, 573, 577, 581, 
	585, 589, 593, 597, 600, 604, 608, 612, 
	614
};

static const unsigned char _issuu_json2sql_indicies[] = {
	0, 0, 2, 3, 1, 1, 5, 6, 
	7, 4, 1, 5, 4, 5, 5, 8, 
	1, 8, 8, 9, 0, 3, 10, 1, 
	1, 12, 13, 14, 11, 1, 12, 11, 
	12, 12, 2, 0, 8, 3, 1, 1, 
	12, 15, 11, 1, 16, 11, 16, 16, 
	2, 0, 17, 3, 1, 18, 18, 9, 
	19, 3, 20, 1, 21, 21, 22, 23, 
	1, 24, 24, 2, 25, 3, 26, 1, 
	27, 27, 2, 28, 3, 1, 1, 12, 
	29, 11, 1, 12, 30, 11, 1, 12, 
	31, 11, 1, 12, 32, 11, 1, 12, 
	33, 11, 1, 12, 34, 11, 1, 12, 
	35, 11, 1, 12, 36, 37, 11, 1, 
	12, 38, 11, 1, 12, 39, 11, 1, 
	12, 40, 11, 1, 12, 41, 11, 1, 
	12, 42, 11, 1, 12, 43, 11, 1, 
	44, 11, 44, 44, 2, 0, 45, 3, 
	1, 45, 45, 46, 0, 3, 10, 1, 
	1, 48, 49, 50, 47, 1, 52, 51, 
	1, 52, 53, 51, 1, 54, 51, 1, 
	52, 55, 51, 1, 52, 56, 51, 1, 
	52, 57, 51, 1, 52, 58, 51, 1, 
	52, 59, 51, 1, 52, 60, 51, 1, 
	52, 61, 51, 1, 52, 62, 63, 51, 
	1, 52, 64, 51, 1, 52, 65, 51, 
	1, 52, 66, 51, 1, 52, 67, 51, 
	1, 52, 68, 51, 1, 52, 69, 51, 
	1, 70, 51, 1, 52, 71, 72, 51, 
	1, 52, 73, 51, 1, 52, 74, 51, 
	1, 52, 75, 51, 1, 52, 76, 51, 
	1, 52, 77, 51, 1, 52, 78, 51, 
	1, 52, 79, 51, 1, 80, 51, 81, 
	81, 2, 0, 82, 3, 1, 82, 82, 
	83, 0, 3, 10, 1, 1, 85, 86, 
	87, 84, 1, 89, 88, 90, 90, 2, 
	28, 8, 3, 1, 1, 89, 91, 88, 
	1, 92, 88, 93, 93, 2, 28, 17, 
	3, 1, 1, 89, 94, 88, 1, 89, 
	95, 88, 1, 89, 96, 88, 1, 89, 
	97, 88, 1, 89, 98, 88, 1, 89, 
	99, 88, 1, 89, 100, 88, 1, 89, 
	101, 102, 88, 1, 89, 103, 88, 1, 
	89, 104, 88, 1, 89, 105, 88, 1, 
	89, 106, 88, 1, 89, 107, 88, 1, 
	89, 108, 88, 1, 109, 88, 110, 110, 
	2, 28, 45, 3, 1, 1, 89, 111, 
	112, 88, 1, 89, 113, 88, 1, 89, 
	114, 88, 1, 89, 115, 88, 1, 89, 
	116, 88, 1, 89, 117, 88, 1, 89, 
	118, 88, 1, 89, 119, 88, 1, 120, 
	88, 121, 121, 2, 28, 82, 3, 1, 
	1, 89, 122, 88, 1, 89, 119, 88, 
	123, 123, 2, 0, 3, 10, 1, 123, 
	123, 2, 0, 3, 1, 1, 52, 124, 
	51, 1, 52, 79, 51, 1, 12, 125, 
	126, 11, 1, 12, 127, 11, 1, 12, 
	128, 11, 1, 12, 129, 11, 1, 12, 
	130, 11, 1, 12, 131, 11, 1, 12, 
	132, 11, 1, 12, 133, 11, 1, 81, 
	11, 1, 12, 134, 11, 1, 12, 133, 
	11, 1, 5, 135, 4, 1, 136, 4, 
	136, 136, 17, 1, 1, 5, 137, 4, 
	1, 5, 138, 4, 1, 5, 139, 4, 
	1, 5, 140, 4, 1, 5, 141, 4, 
	1, 5, 142, 4, 1, 5, 143, 4, 
	1, 5, 144, 145, 4, 1, 5, 146, 
	4, 1, 5, 147, 4, 1, 5, 148, 
	4, 1, 5, 149, 4, 1, 5, 150, 
	4, 1, 5, 151, 4, 1, 152, 4, 
	152, 152, 45, 1, 1, 5, 153, 154, 
	4, 1, 5, 155, 4, 1, 5, 156, 
	4, 1, 5, 157, 4, 1, 5, 158, 
	4, 1, 5, 159, 4, 1, 5, 160, 
	4, 1, 5, 161, 4, 1, 162, 4, 
	162, 162, 82, 1, 1, 5, 163, 4, 
	1, 5, 161, 4, 164, 1, 165, 165, 
	164, 1, 0
};

static const unsigned char _issuu_json2sql_trans_targs[] = {
	1, 0, 2, 144, 3, 4, 112, 115, 
	5, 6, 97, 7, 8, 9, 16, 10, 
	11, 12, 12, 13, 14, 1, 2, 144, 
	15, 13, 14, 15, 13, 17, 18, 19, 
	20, 21, 22, 23, 24, 101, 25, 26, 
	27, 28, 29, 30, 31, 32, 33, 34, 
	8, 35, 37, 34, 8, 36, 11, 38, 
	39, 40, 41, 42, 43, 44, 45, 52, 
	46, 47, 48, 49, 50, 51, 31, 53, 
	99, 54, 55, 56, 57, 58, 59, 60, 
	61, 61, 62, 63, 64, 65, 66, 69, 
	64, 65, 65, 67, 68, 68, 70, 71, 
	72, 73, 74, 75, 76, 77, 85, 78, 
	79, 80, 81, 82, 83, 84, 84, 86, 
	95, 87, 88, 89, 90, 91, 92, 93, 
	94, 94, 96, 98, 100, 102, 110, 103, 
	104, 105, 106, 107, 108, 109, 111, 113, 
	114, 116, 117, 118, 119, 120, 121, 122, 
	123, 131, 124, 125, 126, 127, 128, 129, 
	130, 132, 141, 133, 134, 135, 136, 137, 
	138, 139, 140, 142, 1, 144
};

static const char _issuu_json2sql_trans_actions[] = {
	1, 0, 1, 18, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 21, 21, 3, 9, 9, 29, 
	6, 6, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 12, 3, 
	33, 3, 3, 1, 25, 1, 25, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 25, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 
	25, 1, 1, 12, 3, 33, 3, 3, 
	1, 25, 1, 1, 25, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 25, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 
	25, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 15, 1
};

static const int issuu_json2sql_start = 143;
static const int issuu_json2sql_first_final = 143;
static const int issuu_json2sql_error = 0;

static const int issuu_json2sql_en_main = 143;


#line 48 "src/issuu_json2sql.rl"

int main(int argc, char **argv) {

  PRE;

  fputs("INSERT INTO issuu_log (ts, visitor_uuid, visitor_useragent, visitor_country) VALUES\n", stdout);
  
  
  
  int first = 1;

  while(fgets(buffer, sizeof(buffer), stdin)) {
    char *p  = &buffer[0];
    char *pe = p + strlen(buffer) + 1;
    if(!first) {
      fputs(",\n", stdout);
    }
    first = 0;
    
#line 331 "src/issuu_json2sql.c"
	{
	cs = issuu_json2sql_start;
	}

#line 67 "src/issuu_json2sql.rl"
    
#line 338 "src/issuu_json2sql.c"
	{
	int _klen;
	unsigned int _trans;
	const char *_acts;
	unsigned int _nacts;
	const char *_keys;

	if ( p == pe )
		goto _test_eof;
	if ( cs == 0 )
		goto _out;
_resume:
	_keys = _issuu_json2sql_trans_keys + _issuu_json2sql_key_offsets[cs];
	_trans = _issuu_json2sql_index_offsets[cs];

	_klen = _issuu_json2sql_single_lengths[cs];
	if ( _klen > 0 ) {
		const char *_lower = _keys;
		const char *_mid;
		const char *_upper = _keys + _klen - 1;
		while (1) {
			if ( _upper < _lower )
				break;

			_mid = _lower + ((_upper-_lower) >> 1);
			if ( (*p) < *_mid )
				_upper = _mid - 1;
			else if ( (*p) > *_mid )
				_lower = _mid + 1;
			else {
				_trans += (unsigned int)(_mid - _keys);
				goto _match;
			}
		}
		_keys += _klen;
		_trans += _klen;
	}

	_klen = _issuu_json2sql_range_lengths[cs];
	if ( _klen > 0 ) {
		const char *_lower = _keys;
		const char *_mid;
		const char *_upper = _keys + (_klen<<1) - 2;
		while (1) {
			if ( _upper < _lower )
				break;

			_mid = _lower + (((_upper-_lower) >> 1) & ~1);
			if ( (*p) < _mid[0] )
				_upper = _mid - 2;
			else if ( (*p) > _mid[1] )
				_lower = _mid + 2;
			else {
				_trans += (unsigned int)((_mid - _keys)>>1);
				goto _match;
			}
		}
		_trans += _klen;
	}

_match:
	_trans = _issuu_json2sql_indicies[_trans];
	cs = _issuu_json2sql_trans_targs[_trans];

	if ( _issuu_json2sql_trans_actions[_trans] == 0 )
		goto _again;

	_acts = _issuu_json2sql_actions + _issuu_json2sql_trans_actions[_trans];
	_nacts = (unsigned int) *_acts++;
	while ( _nacts-- > 0 )
	{
		switch ( *_acts++ )
		{
	case 0:
#line 10 "src/issuu_json2sql.rl"
	{ echo = 1; }
	break;
	case 1:
#line 11 "src/issuu_json2sql.rl"
	{ echo = 0; }
	break;
	case 2:
#line 12 "src/issuu_json2sql.rl"
	{
    if(echo) {
      fprintf(stdout, "%c", (*p));
    } else {
      // fprintf(stdout, "[%c]", fc); 
    }
  }
	break;
	case 3:
#line 22 "src/issuu_json2sql.rl"
	{ fputs(",", stdout); }
	break;
	case 4:
#line 26 "src/issuu_json2sql.rl"
	{ fputs("'", stdout); }
	break;
	case 5:
#line 37 "src/issuu_json2sql.rl"
	{ fputs("(", stdout); }
	break;
	case 6:
#line 38 "src/issuu_json2sql.rl"
	{ fputs(")", stdout); }
	break;
#line 446 "src/issuu_json2sql.c"
		}
	}

_again:
	if ( cs == 0 )
		goto _out;
	if ( ++p != pe )
		goto _resume;
	_test_eof: {}
	_out: {}
	}

#line 68 "src/issuu_json2sql.rl"
  }
  fputs(";\n", stdout);
  

  POST;
  
  return 0;
}
