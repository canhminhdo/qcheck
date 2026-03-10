#!/bin/bash
/usr/bin/time -v qcheck << EOF
load ../loop.qw .
EOF
