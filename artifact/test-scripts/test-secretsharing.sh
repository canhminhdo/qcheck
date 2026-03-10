#!/bin/bash
/usr/bin/time -v qcheck << EOF
load ../relay.qw .
EOF
