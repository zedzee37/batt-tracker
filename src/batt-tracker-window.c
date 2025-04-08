/* batt-tracker-window.c
 *
 * Copyright 2025 zedzee
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#include "config.h"

#include "batt-tracker-window.h"

struct _BattTrackerWindow
{
	AdwApplicationWindow  parent_instance;

	/* Template widgets */
	GtkLabel            *label;
};

G_DEFINE_FINAL_TYPE (BattTrackerWindow, batt_tracker_window, ADW_TYPE_APPLICATION_WINDOW)

static void
batt_tracker_window_class_init (BattTrackerWindowClass *klass)
{
	GtkWidgetClass *widget_class = GTK_WIDGET_CLASS (klass);

	gtk_widget_class_set_template_from_resource (widget_class, "/zedzee/github/io/batt_tracker/batt-tracker-window.ui");
	gtk_widget_class_bind_template_child (widget_class, BattTrackerWindow, label);
}

static void
batt_tracker_window_init (BattTrackerWindow *self)
{
	gtk_widget_init_template (GTK_WIDGET (self));
}
