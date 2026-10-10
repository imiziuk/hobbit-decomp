
void FUN_006c9524(undefined **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((undefined **)PTR_LOOP_0075ab70 == param_1) {
    PTR_LOOP_0075ab70 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_00758b50) {
    *(undefined **)param_1[1] = *param_1;
    *(undefined **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_0081636c,0,param_1);
    return;
  }
  DAT_00758b60 = 0xffffffff;
  return;
}

