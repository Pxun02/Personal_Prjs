even(0).
even(X) :- X > 0,
    is(X1, X-2),
    even(X1).