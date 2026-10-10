
undefined4 * __thiscall FUN_00463a40(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *param_1 = *param_2;
  puVar2 = param_2 + 2;
  puVar3 = param_1 + 2;
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x82] = param_2[0x82];
  param_1[0x83] = param_2[0x83];
  param_1[0x84] = param_2[0x84];
  param_1[0x85] = param_2[0x85];
  param_1[0x86] = param_2[0x86];
  param_1[0x87] = param_2[0x87];
  *(undefined1 *)((int)param_1 + 0x223) = *(undefined1 *)((int)param_2 + 0x223);
  *(undefined1 *)((int)param_1 + 0x222) = *(undefined1 *)((int)param_2 + 0x222);
  *(undefined1 *)((int)param_1 + 0x221) = *(undefined1 *)((int)param_2 + 0x221);
  *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(param_2 + 0x88);
  param_1[0x89] = param_2[0x89];
  param_1[0x8a] = param_2[0x8a];
  param_1[0x8b] = param_2[0x8b];
  param_1[0x8c] = param_2[0x8c];
  param_1[0x8d] = param_2[0x8d];
  param_1[0x8e] = param_2[0x8e];
  param_1[0x90] = param_2[0x90];
  param_1[0x91] = param_2[0x91];
  param_1[0x92] = param_2[0x92];
  param_1[0x93] = param_2[0x93];
  param_1[0x94] = param_2[0x94];
  param_1[0x95] = param_2[0x95];
  return param_1;
}

