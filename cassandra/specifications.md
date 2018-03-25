Cassandra specifications
========================

Cassandra is:
- a **distributed** database from Apache
- **descentralized**
- highly **scalable** (add hardware for more customers)
- designed to manage **very large** amounts of *structured* data
- high **availability**
- column orientted
- open source
- NoSqlDatabase (Not Only SQL)
    - schema-free
    - easy replication
    - simple API
    - eventually consistent
- Cassandra supports **ACID**
- developed at Facebook

| Relational Database               | NoSql Database                      |
| --------------------------------- | ----------------------------------- |
| supports powerful query language  | supports very simple query language |
| it has a fixed schema             | no fixed schema                     |
| follows ACID                      | it is only "eventually consistent"  |
| supports transactions             | does not support transactions       |

**ACID** = Atomicity, Consistency, Isolation, Durability

Components
----------

- Node: the place where the data is **stored**
- Data center: collection of related **nodes**
- Cluster: contains one or more **data centers**
- Commit log: crash-recovery mechanism; every **write** is written in the log
- Mem-table: memory-resident data structure; after commit log, the date will be written into the mem-table
- SSTable: disk file where the data is **flushed** from mem-table when its contents reach a **threshold value**
- Bloom filter: **quick, non-deterministic** algorithms for testing whether an element is a **member** of a set; it is a special type of **cache**

