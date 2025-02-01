#include <stdlib.h>
#include <string.h>

#include "./token.h"

int istt_keyword(char *str){
	if(strcmp(str, "return") == 0){
		return 0;
	}
	return 1;
}

int addtoken(struct token **tlist, unsigned long curr_tlistsize, enum token_type type, void *data){
	void *gptr = NULL;
	curr_tlistsize++;
	gptr = realloc(*tlist, curr_tlistsize);
	if(gptr == NULL){
		return 1;
	}
	gptr->type = type;
	gptr->data = data;
	*tlist[curr_tlistsize] = gptr;
	return 0;
}

struct token *tokenizer(char *streamstr){
	struct token *tokens = NULL;
	unsigned long token_amnt = 0;
	if(streamstr == NULL){
		return NULL;
	}
	while(streamstr != NULL){
		if(istt_keyword(streamstr) == 1){
			addtoken(tokens, token_amnt, TT_KEYWORD,);
			continue;
		}
		streamstr++;
	}
	return tokens;
}
