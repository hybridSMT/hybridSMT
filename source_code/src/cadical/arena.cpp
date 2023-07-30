#include "internal.h"

namespace CaDiCaL {

Arena::Arena (Internal * i) {
  memset (this, 0, sizeof *this);
  internal = i;
}

Arena::~Arena () {
  delete [] from.start;
  delete [] to.start;
}

void Arena::prepare (size_t bytes) {
  LOG ("preparing 'to' space of arena with %zd bytes", bytes);
  assert (!to.start);
  to.top = to.start = new char[bytes];
  to.end = to.start + bytes;
}

void Arena::swap () {
  delete [] from.start;
  LOG ("delete 'from' space of arena with %zd bytes",
    (size_t) (from.end - from.start));
  from = to;
  to.start = to.top = to.end = 0;
}

}
