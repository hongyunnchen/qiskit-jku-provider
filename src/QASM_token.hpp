/**
 * A <code>Token</code> represents a terminal symbol. Tokens are provided by
 * the scanner for the parser. They hold additional information about the
 * symbol.
 */
 class Token {
 public:
	enum class Kind {none, identifier, number, plus, semicolon, eof, lpar, rpar, lbrack, rbrack, lbrace, rbrace, comma, minus, times, nninteger, real, qreg, creg, ugate, cxgate, gate, pi, measure, openqasm, probabilities, measureall};

	/** Token class (none, ident, ...). */
	Kind kind;

	/** Line number of this token. */
	int line;

	/** Column number of this token. */
	int col;

	/** Value of this token (for numbers or character constants). */
	int val;

	double val_real;

	/** String representation of this token. */
	std::string str;

	/**
	 * Constructor that sets the fields required for all tokens.
	 */
	Token(Kind kind, int line, int col) {
		this->kind = kind;
		this->line = line;
		this->col = col;
		this->val = 0;
		this->val_real = 0.0;
	}
	Token() : Token(Kind::none, 0, 0) {
	}

 };