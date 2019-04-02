#!/bin/sh
set -e
for dir in `ls .`
do
	if [ -d $dir ]
	then
		echo $dir
		cd $dir/build/ && cmake ../../../ && make && cp $dir.bin ../ && cd -
	fi
done
set +e
