bool is_pal(string line){
  for (int i=0;i < line.length();i++){
     if (line.substr(i,1) != line.substr(line.length()-i-1,1)) return false;
  }
  return true;
}
