#!/bin/bash
ls -l /tmp; if [ $? -eq 0 ]; then echo "Success"; else echo "Failure"; fi
