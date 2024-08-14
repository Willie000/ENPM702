int main() {
  std::string s{"Hello World"};
  s.erase(s.size() - 6, 6);  // remove 6 characters starting from index 5
  std::cout << s << '\n';
}