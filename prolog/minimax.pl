minimum(X, Y, X) :- X =< Y, !.
minimum(X, Y, Y) :- X > Y.

maximum(X, Y, X) :- X >= Y, !.
maximum(X, Y, Y) :- X < Y.