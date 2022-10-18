/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#41474e", /* black   */
  [1] = "#d26878", /* red     */
  [2] = "#56afa0", /* green   */
  [3] = "#e08f67", /* yellow  */
  [4] = "#5690af", /* blue    */
  [5] = "#9271d6", /* magenta */
  [6] = "#5e8d87", /* cyan    */
  [7] = "#cbcdcd", /* white   */

  /* 8 bright colors */
  [8]  = "#41474e", /* black   */
  [9]  = "#623039", /* red     */
  [10] = "#22453f", /* green   */
  [11] = "#926048", /* yellow  */
  [12] = "#223844", /* blue    */
  [13] = "#47356c", /* magenta */
  [14] = "#8abeb7", /* cyan    */
  [15] = "#646868", /* white   */

  /* special colors */
  [256] = "#eeeeee", /* background */
  [257] = "#41474e", /* foreground */
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
