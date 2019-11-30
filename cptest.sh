#!/bin/bash
problemname=$1
contest=$2
script_dir=$(cd $(dirname $0); pwd)
src_dir=${script_dir}/${contest:0:2}
cd ${src_dir}/${problemname:0:6}

# 本番中に使うためにログインする(usernameとpasswordは適切に読み替えてください)
# oj login -u username -p passwrod "https://atcoder.jp/" 
# oj login --check "https://atcoder.jp/"

# testディレクトリがなければ取得する
if [ ! -e test/ ]; then
  oj dl "https://${problemname:0:6}.contest.atcoder.jp/tasks/${problemname:0:8}"
fi

g++ -Wall -std=c++14 ${src_dir}/${problemname:0:6}/$1.cpp
oj test
rm -f a.out

# testディレクトリは消さないことにした
#rm -rf test 