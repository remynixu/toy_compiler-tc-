#ifndef TOKEN_H
#define TOKEN_H		1

enum token_type{
	TT_KEYWORD,
	TT_DELIMITER,
	TT_LITERAL
};

enum tt_keyword{
	TTK_RETURN,
	TTK_INT
};

enum tt_delimiter{
	TTD_STATEMENT_S,
	TTD_STATEMENT_E
};

struct token{
	enum token_type type;
	void *data;
};

extern struct token *tokenizer(char *streamstr);

#endif /* TOKEN_H */
