#!/bin/sh
ifconfig | grep "ether" | cut -c 7-24 | sed G 
