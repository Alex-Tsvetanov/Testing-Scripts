1 1 1 1 1 2 2 2 2 2 2 2 2 2 3 3 3 3 4 4 5 5 6 6 6 6 7 7 7 7 7 7 7 8 8 8 8 9 9 9 9 9 9 10 10 11 11 11 11 12 12 13 14 14 14 15 15 15 16 16 16 16 17 17 17 17 17 17 17 18 18 18 18 18 19 19 19 19 19 21 21 21 22 22 22 22 23 23 23 23 24 24 24 24 24 24 25 26 26 26 26 27 27 27 27 28 28 29 29 29 29 29 29 30 30 30 30 30 30 30 30 30 31 32 32 32 32 32 32 33 33 34 34 34 34 34 34 34 34 35 35 37 37 37 37 38 38 38 39 39 40 40 41 42 42 43 43 43 43 44 44 44 44 44 45 45 45 45 45 45 46 46 46 47 47 47 47 48 48 48 48 49 49 49 50 50 50 50 50 50 50 50 51 51 51 51 51 51 51 52 52 52 53 53 53 54 54 54 54 55 56 56 56 57 58 58 58 58 58 58 59 59 60 60 60 61 61 61 61 61 61 62 62 63 63 63 63 63 63 63 63 65 65 65 65 65 65 66 66 66 67 67 68 68 68 68 69 69 70 70 70 71 71 71 71 71 71 72 72 72 72 72 72 72 73 73 74 74 74 75 76 76 76 76 76 77 77 77 77 77 77 77 78 78 78 78 78 78 79 79 79 80 80 80 80 80 81 81 81 81 81 82 82 82 82 83 83 83 83 83 83 84 84 84 84 85 85 86 86 86 86 86 87 87 87 87 88 88 88 88 89 89 89 90 90 90 90 90 91 91 91 91 91 92 92 92 93 93 93 93 93 94 94 94 94 94 95 95 95 95 95 96 96 96 97 97 97 97 98 98 98 98 99 99 100 100 101 101 101 101 102 102 103 103 103 104 104 104 104 104 105 105 105 105 106 106 107 108 108 108 108 109 109 109 109 110 110 110 110 110 111 111 111 111 111 112 112 113 113 113 113 113 113 113 114 114 115 115 115 116 116 117 117 117 119 119 119 119 120 120 120 120 121 121 121 122 122 122 122 123 123 123 124 124 124 125 125 125 126 126 126 127 127 127 127 128 128 128 128 128 129 130 130 130 131 131 131 131 131 131 132 132 132 132 132 132 133 133 133 133 134 134 134 134 134 135 135 135 135 135 136 136 136 136 137 137 137 137 138 138 138 139 139 139 139 139 139 139 140 140 141 141 141 141 141 141 141 142 142 142 142 143 143 144 144 144 144 144 144 144 145 145 145 145 145 145 146 146 146 146 147 148 148 149 149 149 149 150 150 150 150 150 151 151 151 151 152 152 152 152 152 152 153 153 153 153 153 154 154 155 155 155 155 156 156 156 157 157 157 157 157 157 157 157 158 158 158 158 159 159 159 160 160 160 160 160 160 161 161 161 162 162 163 163 163 163 163 164 164 164 165 166 166 166 166 167 167 167 168 168 169 169 170 170 170 171 171 171 171 172 172 172 172 172 172 173 173 174 174 175 175 175 175 177 177 177 177 178 178 178 178 179 179 179 179 180 180 181 181 181 181 181 181 182 183 184 185 186 187 188 189 190 191 192 193 194 195 196 197 198 199 200 201 202 203 204 205 206 207 208 210 211 212 213 214 215 216 217 218 219 220 221 222 223 224 225 226 227 228 229 230 231 232 233 234 235 236 237 238 239 240 241 242 244 245 246 247 248 249 250 251 252 253 254 255 256 257 258 259 260 261 262 263 264 265 266 267 268 269 270 271 272 273 274 275 276 277 278 279 280 281 282 283 284 285 286 287 288 289 290 291 292 293 294 295 296 297 298 299 300 301 302 303 304 305 306 307 308 309 310 311 312 313 314 315 316 317 318 319 320 321 322 323 324 325 326 327 328 329 330 331 332 333 334 335 336 337 338 339 340 341 342 343 344 345 346 347 348 349 350 351 352 353 354 355 356 357 358 359 360 361 362 363 364 365 366 367 368 369 370 371 372 373 374 375 376 377 378 379 380 381 382 383 384 385 386 387 388 389 390 391 392 393 394 395 396 397 398 399 400 401 402 403 404 405 406 407 408 409 410 411 412 413 414 415 416 417 418 419 420 421 422 423 424 425 426 427 428 429 430 431 432 433 434 435 436 437 438 439 440 441 442 443 444 445 446 447 448 449 450 451 452 453 454 455 456 457 458 459 460 461 462 463 464 465 466 467 468 469 470 471 472 473 474 475 476 477 478 479 480 481 482 483 484 485 486 487 488 489 490 491 492 493 494 495 496 497 498 499 500 
