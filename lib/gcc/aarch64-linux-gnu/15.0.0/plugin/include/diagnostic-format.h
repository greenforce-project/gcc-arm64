/* Declarations for managing different output formats for diagnostics.
   Copyright (C) 2023-2024 Free Software Foundation, Inc.
   Contributed by David Malcolm <dmalcolm@redhat.com>.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 3, or (at your option) any later
version.

GCC is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3.  If not see
<http://www.gnu.org/licenses/>.  */

#ifndef GCC_DIAGNOSTIC_FORMAT_H
#define GCC_DIAGNOSTIC_FORMAT_H

/* Abstract base class for a particular output format for diagnostics;
   each value of -fdiagnostics-output-format= will have its own
   implementation.  */

class diagnostic_output_format
{
public:
  virtual ~diagnostic_output_format () {}

  virtual void on_begin_group () = 0;
  virtual void on_end_group () = 0;

  /* Vfunc with responsibility for phase 3 of formatting the message
     and "printing" the result.  */
  virtual void on_report_diagnostic (const diagnostic_info &,
				     diagnostic_t orig_diag_kind) = 0;

  virtual void on_diagram (const diagnostic_diagram &diagram) = 0;
  virtual void after_diagnostic (const diagnostic_info &) = 0;
  virtual bool machine_readable_stderr_p () const = 0;

  diagnostic_context &get_context () const { return m_context; }
  pretty_printer *get_printer () const { return m_context.m_printer; }

  text_art::theme *get_diagram_theme () const
  {
    return m_context.get_diagram_theme ();
  }

protected:
  diagnostic_output_format (diagnostic_context &context)
  : m_context (context)
  {}

  diagnostic_context &m_context;
};

extern void
diagnostic_output_format_init (diagnostic_context &,
			       const char *main_input_filename_,
			       const char *base_file_name,
			       enum diagnostics_output_format,
			       bool json_formatting);
extern void
diagnostic_output_format_init_json_stderr (diagnostic_context &context,
					   bool formatted);
extern void
diagnostic_output_format_init_json_file (diagnostic_context &context,
					 bool formatted,
					 const char *base_file_name);
extern void
diagnostic_output_format_init_sarif_stderr (diagnostic_context &context,
					    const line_maps *line_maps,
					    const char *main_input_filename_,
					    bool formatted);
extern void
diagnostic_output_format_init_sarif_file (diagnostic_context &context,
					  const line_maps *line_maps,
					  const char *main_input_filename_,
					  bool formatted,
					  const char *base_file_name);
extern void
diagnostic_output_format_init_sarif_stream (diagnostic_context &context,
					    const line_maps *line_maps,
					    const char *main_input_filename_,
					    bool formatted,
					    FILE *stream);

#endif /* ! GCC_DIAGNOSTIC_FORMAT_H */
