# Download base image ubuntu 20.04
FROM ubuntu:20.04

# Disable Prompt During Packages Installation
ARG DEBIAN_FRONTEND=noninteractive

# Update Ubuntu Software repository
RUN apt-get update && apt-get install -y \
    make \
    cmake \
    g++ \
    libncurses5-dev \
    libncursesw5-dev \
&& rm -rf /var/lib/apt/lists/*

# These commands copy your files into the specified directory in the image
# and set that as the working location
COPY . /usr/src/app
WORKDIR /usr/src/app

# This command compiles your app using GCC, adjust for your source code
RUN cmake .
RUN make

CMD ./bin/test_timestamp