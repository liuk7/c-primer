for (auto it = text.begin(); it != text.end() && !it->empty; ++it) {
  *it = toupper(*it);
  cout << *it << endl;
}
