my_plus(X, 0, X).
my_plus(X, s(Y), s(Z)) :- my_plus(X, Y, Z).

my_times(_, 0, 0).
my_times(X, s(Y), Z) :- my_times(X, Y, Z1),
    my_plus(X, Z1, Z).