/*
 * Copyright (c) 2011 Conformal Systems LLC <info@conformal.com>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */


#ifndef SPECTRWM_VERSION_H
#define SPECTRWM_VERSION_H

#define SPECTRWM_STR(x)		#x
#define SPECTRWM_STRINGIZE(x)	SPECTRWM_STR(x)

#define SPECTRWM_MAJOR		2
#define SPECTRWM_MINOR		7
#define SPECTRWM_PATCH		0
#define SPECTRWM_VERSION		SPECTRWM_STRINGIZE(SPECTRWM_MAJOR) "." \
				SPECTRWM_STRINGIZE(SPECTRWM_MINOR) "." \
				SPECTRWM_STRINGIZE(SPECTRWM_PATCH)

#endif /* SPECTRWM_VERSION_H */

