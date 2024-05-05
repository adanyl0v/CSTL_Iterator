#!/bin/bash

read -p "Enter the installation config: " CONFIG
cmake --install "build/$CONFIG" --config $CONFIG
