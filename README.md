# Search_Algorithm
查找就是根据给定的某个值，在查找表中确定一个其关键字等于给定值的元素（或记录）。
	查找概论（福喜）
		被查找数据的集合--查找表
		查找表（Search Table）：是由同一类型的数据元素（或记录）构成的集合。
		关键字（Key）：是数据元素中某个数据项的值，又称键值，用它可以标记一个数据元素。也可以标识一个数据元素。
	顺序表查找
		顺序表查找算法(O(n))
	有序表查找
		折半查找(O(logn)) 插值查找(O(logn)) 斐波那契查找(O(logn))
	线性索引查找
		索引就是把一个关键字与它对应的记录相关的过程。
		索引按照结构划分为：线性索引、树形索引、多级索引
		线性索引：将索引集合组织成线性结构，也成为索引表。重点介绍三种线性索引表：稠密索引、分块索引、倒排索引
			稠密索引：将数据集中的每个记录对应一个索引项。
			分块索引：分块有序，是把数据集的记录分成了若干块，并且这些块需要满足两个条件：
				块内无序：每一块内部无排序。
				块间有序：提高效率。
				分块索引项三个数据项：
				最大关键码，块中记录个数，块首指针
			倒排索品：
				索引项的通用结构：	次关键码--记录号表
		二叉排序树：又称为二叉查找树。它或者是一颗空树，或者是具有下列性质的二叉树。
			* 若它的左子树不空，则左子树上所有节点的值均小于它的根结构的值；
			* 若它的右子树不空，则右子树上所有节点的值均大于它的根结构的值；
			* 它的左、右子树也分别为二叉排序树。
			
	二叉排序树
	平衡二叉树（AVL树）
	多路查找树（B树）
	散列表查找（哈希表）
	散列函数的构造方法
	处理散列冲突的方法
	散列表查找实现
	总结回顾