
void __thiscall FUN_004d22c0(int param_1,uint param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  bVar1 = *(byte *)(param_1 + 0x126);
  *(byte *)(param_1 + 0x126) =
       (*(byte *)(param_1 + 0x126) ^ (byte)param_2) & 1 ^ *(byte *)(param_1 + 0x126);
  if ((((((bVar1 & 1) != param_2) && ((*(byte *)(param_1 + 0x7a) & 4) == 0)) &&
       (cVar2 = *(char *)(param_1 + 0x7c), cVar2 != '\"')) && ((cVar2 != '\x1e' && (cVar2 != '$'))))
     && ((cVar2 != '1' && ((cVar2 != '3' && ((*(uint *)(param_1 + 0x10) & 0xc0000000) == 0)))))) {
    local_10 = *(undefined4 *)(param_1 + 8);
    local_c = *(undefined4 *)(param_1 + 0xc);
    FUN_0058c830(param_1 + 0x44,&local_10);
  }
  return;
}

