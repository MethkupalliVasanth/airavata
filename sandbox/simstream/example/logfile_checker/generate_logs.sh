#!/usr/bin/env bash
#
#
# Licensed to the Apache Software Foundation (ASF) under one
# or more contributor license agreements.  See the NOTICE file
# distributed with this work for additional information
# regarding copyright ownership.  The ASF licenses this file
# to you under the Apache License, Version 2.0 (the
# "License"); you may not use this file except in compliance
# with the License.  You may obtain a copy of the License at
#
#   http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing,
# software distributed under the License is distributed on an
# "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
# KIND, either express or implied.  See the License for the
# specific language governing permissions and limitations
# under the License.
#


outfile="test.txt"

echo "[STATUS] Starting logfile generator" >> $outfile

sleep 2

echo "[STATUS] Doing stuff" >> $outfile
echo "Stuff that doesn't need to be reported" >> $outfile
echo "Stuff that also doesn't need to be reported" >> $outfile
echo "[DATA] 7.267" >> $outfile

sleep 2

echo "[STATUS] Doing more stuff" >> $outfile
echo "Yet more stuff that doesn't need to be reported" >> $outfile
echo "[ERROR] Some non-fatal error that the user should know about" >> $outfile

sleep 2

echo "[STATUS] Finished generating logs" >> $outfile