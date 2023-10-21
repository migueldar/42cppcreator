if [ "$1" == "" ]; then
    echo must have between 1 and 2 parameters
    exit 1
fi

cp -i ~/repos/42-cpp-creator/cpptempcreator/templates/dummie.cpp $1.cpp
cp -i ~/repos/42-cpp-creator/cpptempcreator/templates/dummie.hpp $1.hpp
if [ "$2" == "make" ]; then
    cp -i ~/repos/42-cpp-creator/cpptempcreator/templates/Makefile Makefile
fi
    
sed -i "s/dummie/$1/g" $1.cpp
sed -i "s/dummie/$1/g" $1.hpp
sed -i "s/DUMMIE/$(echo $1 | tr '[:lower:]' '[:upper:]')/g" $1.hpp

if [ "$2" == "make" ]; then
    sed -i "s/dummie/$1/g" Makefile
fi
