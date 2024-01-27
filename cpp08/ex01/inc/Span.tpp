template <typename T>
void Span::addNumber(T begin, T end) {
	for (T it = begin; it != end; ++it) {
		addNumber(*it);
	}
}
