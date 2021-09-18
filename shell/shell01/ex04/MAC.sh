#!/bin/sh
ifconfig -a | grep ether | awk '{printf $2}'