
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0065c190(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = DAT_007f0030 + DAT_007f0028 + _DAT_007f0020;
  uVar2 = uVar1 + _DAT_007f0018;
  uVar3 = uVar2 + _DAT_007f0010;
  uVar4 = uVar3 + _DAT_007f0008;
  uVar5 = uVar4 + _DAT_007f0000;
  return (float10)_DAT_006f95b4 /
         (float10)CONCAT44(DAT_007f0034 + DAT_007f002c + (uint)CARRY4(DAT_007f0030,DAT_007f0028) +
                           _DAT_007f0024 + (uint)CARRY4(DAT_007f0030 + DAT_007f0028,_DAT_007f0020) +
                           _DAT_007f001c + (uint)CARRY4(uVar1,_DAT_007f0018) + _DAT_007f0014 +
                           (uint)CARRY4(uVar2,_DAT_007f0010) + _DAT_007f000c +
                           (uint)CARRY4(uVar3,_DAT_007f0008) + _DAT_007f0004 +
                           (uint)CARRY4(uVar4,_DAT_007f0000) + _DAT_007efffc +
                           (uint)CARRY4(uVar5,_DAT_007efff8),uVar5 + _DAT_007efff8);
}

