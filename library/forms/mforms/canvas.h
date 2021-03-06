/*
 * Copyright (c) 2014, Oracle and/or its affiliates. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; version 2 of the
 * License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301  USA
 */

#ifndef _MFORMS_CANVAS_H_
#define _MFORMS_CANVAS_H_

#include <mforms/view.h>

namespace mdc {
  class CanvasView;
};

namespace mforms {
  class Canvas;
#ifndef DOXYGEN_SHOULD_SKIP_THIS
#ifndef SWIG
  struct CanvasImplPtrs
  {
    bool (*create)(Canvas *self);
    mdc::CanvasView *(*canvas)(Canvas *self);
  };
#endif
#endif

  class MFORMS_EXPORT Canvas : public View
  {
  protected:
    CanvasImplPtrs *_canvas_impl;

  public:
    Canvas();
    mdc::CanvasView *canvas();
  };

};

#endif
