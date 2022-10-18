/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#222529", /* black   */
  [1] = "#cd909b", /* red     */
  [2] = "#56afa0", /* green   */
  [3] = "#e2aea2", /* yellow  */
  [4] = "#87c9e5", /* blue    */
  [5] = "#cea7de", /* magenta */
  [6] = "#78b6ad", /* cyan    */
  [7] = "#cbcdcd", /* white   */

  /* 8 bright colors */
  [8]  = "#222529", /* black   */
  [9]  = "#cd909b", /* red     */
  [10] = "#56afa0", /* green   */
  [11] = "#e2aea2", /* yellow  */
  [12] = "#87c9e5", /* blue    */
  [13] = "#cea7de", /* magenta */
  [14] = "#78b6ad", /* cyan    */
  [15] = "#d6d6d6", /* white   */

  /* special colors */
  [256] = "#222529", /* background */
  [257] = "#d6d6d6", /* foreground */
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor
 */
static unsigned int defaultfg = 257;
static unsigned int defaultbg = 256;
static unsigned int defaultcs = 257;

/*
 * Colors used, when the specific fg == defaultfg. So in reverse mode this
 * will reverse too. Another logic would only make the simple feature too
 * complex.
 */
static unsigned int defaultitalic = 7;
static unsigned int defaultunderline = 7;
