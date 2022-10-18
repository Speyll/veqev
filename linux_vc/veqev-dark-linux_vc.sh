#!/bin/sh
if [ "$TERM" = "linux" ]; then
  /bin/echo -e "
  \e]P0222529
  \e]P1cd909b
  \e]P256afa0
  \e]P3e2aea2
  \e]P487c9e5
  \e]P5cea7de
  \e]P678b6ad
  \e]P7cbcdcd
  \e]P8222529
  \e]P9cd909b
  \e]PA56afa0
  \e]PBe2aea2
  \e]PC87c9e5
  \e]PDcea7de
  \e]PE78b6ad
  \e]PFd6d6d6
  "
  # get rid of artifacts
  clear
fi
