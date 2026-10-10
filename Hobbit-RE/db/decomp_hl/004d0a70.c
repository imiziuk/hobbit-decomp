
void __thiscall FUN_004d0a70(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (param_2 != -1) {
    if (param_3 == 0) {
      uVar3 = __allshl();
      uVar2 = *(uint *)(param_1 + 0xb0) | (uint)uVar3;
      uVar1 = *(uint *)(param_1 + 0xb4) | (uint)((ulonglong)uVar3 >> 0x20);
    }
    else {
      uVar3 = __allshl();
      uVar2 = *(uint *)(param_1 + 0xb0) & ~(uint)uVar3;
      uVar1 = *(uint *)(param_1 + 0xb4) & ~(uint)((ulonglong)uVar3 >> 0x20);
    }
    *(uint *)(param_1 + 0xb4) = uVar1;
    *(uint *)(param_1 + 0xb0) = uVar2;
    *(uint *)(param_1 + 0xb0) = uVar2;
    *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0x7fffffff;
  }
  return;
}

