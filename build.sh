#!/usr/bin/env bash
# Fetch the latest version of the library
fetch() {
if [ -f "wcwidth9.h" ]; then return; fi
URL="https://github.com/joshuarubin/wcwidth9/raw/refs/heads/master/wcwidth9.h"
FILE="wcwidth9.h"

# Download the release
echo "Downloading $FILE from $URL ..."
curl -L "$URL" -o "$FILE"
echo ""
}


# Test the project
test() {
echo "Running 01-basic-usage.c ..."
clang -I. -o 01.exe examples/01-basic-usage.c  && ./01.exe && echo -e "\n"
echo "Running 02-east-asian-context.c ..."
clang -I. -o 02.exe examples/02-east-asian-context.c    && ./02.exe && echo -e "\n"
echo "Running 03-custom-context.c ..."
clang -I. -o 03.exe examples/03-custom-context.c  && ./03.exe && echo -e "\n"
}


# Main script
if [[ "$1" == "test" ]]; then test
elif [[ "$1" == "fetch" ]]; then fetch
else echo "Usage: $0 {fetch|test}"; fi
