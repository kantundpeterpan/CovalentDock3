/*

 $Id: cnv_state_to_coords.h,v 1.6 2009/05/08 23:02:11 rhuey Exp $

 AutoDock 

Copyright (C) 2009 The Scripps Research Institute. All rights reserved.

 AutoDock is a Trade Mark of The Scripps Research Institute.

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.

 */

#ifndef CNV_STATE_TO_COORDS
#define CNV_STATE_TO_COORDS

#include "constants.h"
#include "torsion.h"
#include "qtransform.h"


void cnv_state_to_coords( const State now,
                          Real vt[MAX_TORS][SPACE],
                          int tlist[MAX_TORS][MAX_ATOMS],
                          const int ntor,
                          Real crdpdb[MAX_ATOMS][SPACE],
                          Real crd[MAX_ATOMS][SPACE],
                          const int natom);
#endif
