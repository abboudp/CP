void exclusive(bool x, bool y, bool &xy) {
    xy = (x && !y) || (!x && y);
}

void implies(bool x, bool y, bool &xy) {
    xy = !(x && !y);
}

void equivalence(bool x, bool y, bool &xy) {
    xy = (x && y) || (!x && !y);
}