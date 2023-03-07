father_child(junichiro, shinjiro).
father_child(junichiro, kotaro).

mother_child(kayoko, shinjiro).
mother_child(kayoko, kotaro).

oyako(X, Y) :- father_child(X, Y).
oyako(X, Y) :- mother_child(X, Y).

sibling(X, Y) :- oyako(A, X),
    oyako(A, Y).